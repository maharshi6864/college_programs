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
							<th colspan="5"><h1>Student Details (Ascending)</h1></th>
						</tr>
						<tr>
							<th>Sr.no</th>
							<th>Name</th>
							<th>Birthdate</th>
							<th>Gender</th>
							<th>MobileNumber</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="students/student">
							 <xsl:sort select="name" order="ascending"/>
							<tr>
								<td><xsl:value-of select="position()"></xsl:value-of></td>
								<td><xsl:value-of select="name"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/address"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/birthdate"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/gender"></xsl:value-of></td>
								<td><xsl:value-of select="personalInfo/mobileNumber"></xsl:value-of></td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>