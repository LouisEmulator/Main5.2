
CREATE Procedure [dbo].[WZ_GetCoin]
@Account varchar(10)
AS
BEGIN

SET NOCOUNT ON
SET XACT_ABORT ON

DECLARE @Coin1 int
DECLARE @Coin2 int
DECLARE @Coin3 int

-- DEFINA O NUMERO DAS MOEDAS
if exists (select memb___id from Z_Credits where memb___id = @Account and type = 1)
BEGIN
	SELECT @Coin1= Value from Z_Credits where memb___id = @Account and type = 1
END
ELSE
BEGIN
	SET @Coin1 = 0
END
	
if exists (select memb___id from Z_Credits where memb___id = @Account and type = 2)
BEGIN
	SELECT @Coin2= Value from Z_Credits where memb___id = @Account and type = 2
END
ELSE
BEGIN
	SET @Coin2 = 0
END

if exists (select memb___id from Z_Credits where memb___id = @Account and type = 3)
BEGIN
	SELECT @Coin3= Value from Z_Credits where memb___id = @Account and type = 3
END
ELSE
BEGIN
	SET @Coin3 = 0
END

SELECT @Coin1 AS Coin1,@Coin2 AS Coin2,@Coin3 AS Coin3

SET NOCOUNT OFF
SET XACT_ABORT OFF

END
