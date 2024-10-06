<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/">
		<html>
			<head>
				<title>Employee Management</title>
			</head>
			<body>
				<xsl:for-each select="emp_info/employee">
					<h2>
						<span>Employee Name : <xsl:value-of select="emp_name/firstName"></xsl:value-of>
						</span>
						<span>
							<xsl:value-of select="emp_name/lastName"></xsl:value-of>
						</span>
					</h2>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>