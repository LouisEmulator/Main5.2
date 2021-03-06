CREATE PROCEDURE	[dbo].[WZ_CustomTop]
	@type		SMALLINT,
	@class		SMALLINT
As
Begin
	
	SET NOCOUNT ON	

	IF @type = 1 
	BEGIN
		IF @class < 0
			Select top 5 name as VALUE1, resetcount as VALUE2 from Character order by ResetCount desc
		ELSE
			Select top 5 name as VALUE1, resetcount as VALUE2 from Character where Class >= @class and Class <= @class+2 order by ResetCount desc
	END
	
	IF @type = 2 
	BEGIN
		IF @class < 0
			Select top 5 name as VALUE1, masterresetcount as VALUE2 from Character order by masterResetCount desc,ResetCount desc
		ELSE
			Select top 5 name as VALUE1, masterresetcount as VALUE2 from Character where Class >= @class and Class <= @class+2 order by masterResetCount desc,ResetCount desc
	END



	SET NOCOUNT OFF	
End