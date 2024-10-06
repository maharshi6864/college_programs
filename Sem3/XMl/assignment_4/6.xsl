<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output	method="xml" indent="yes">
	</xsl:output>
	<xsl:template match="/students">
		<students>
			<xsl:apply-templates select="student"></xsl:apply-templates>
		</students>
	</xsl:template>
	
	<xsl:template match="student">
		<fname id="{id}">
			<xsl:copy-of select="plan/course"></xsl:copy-of>
		</fname>
	</xsl:template>
</xsl:stylesheet>