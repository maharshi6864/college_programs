<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">	
		<html>
			<head>
				<title>Student Details</title>
			</head>
			<body>
				<table>
					<thead>
						<tr>
							<th colspan="5">Student Details</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="students/student">
							<xsl:sort select="result" order="ascending"></xsl:sort>
							<tr>
								<td><xsl:value-of select="name"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/address"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/birthdate"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/gender"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/mobileNumber"></xsl:value-of></td>
								<td><xsl:value-of select="result"></xsl:value-of></td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>