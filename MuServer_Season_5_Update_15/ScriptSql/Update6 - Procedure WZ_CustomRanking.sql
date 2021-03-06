USE [MuOnline]
GO

CREATE PROCEDURE	[dbo].[WZ_CustomRanking]
	@type		SMALLINT
As
Begin
	
	SET NOCOUNT ON	

	IF @type = 0 
	BEGIN
			Select top 10 name as VALUE1, masterresetcount as VALUE2 from Character order by MasterResetCount desc, ResetCount desc
	END
	
	IF @type = 1 
	BEGIN
			Select top 10 name as VALUE1, resetcount as VALUE2 from Character order by ResetCount desc, cLevel desc
	END
	
	IF @type = 2 
	BEGIN
			Select top 10 name as VALUE1, cLevel as VALUE2 from Character order by cLevel desc
	END
	
	IF @type = 3 
	BEGIN
			Select top 10 name as VALUE1, Score as VALUE2 from RankingBloodCastle order by Score desc
	END
	
	IF @type = 4 
	BEGIN
			Select top 10 name as VALUE1, Score as VALUE2 from RankingDevilSquare order by Score desc
	END
	
	
	--WAITFOR DELAY '00:00:02';

	SET NOCOUNT OFF	
End