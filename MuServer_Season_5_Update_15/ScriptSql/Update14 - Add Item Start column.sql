ALTER TABLE CHARACTER ADD ItemStart tinyint NOT NULL DEFAULT(0)
GO
UPDATE CHARACTER SET ItemStart = 1
GO


