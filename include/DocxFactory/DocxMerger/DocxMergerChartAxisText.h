
#ifndef __DOCXFACTORY_DOCX_MERGER_CHART_AXIS_TEXT_H__
#define __DOCXFACTORY_DOCX_MERGER_CHART_AXIS_TEXT_H__

#include "DocxFactory/DocxMerger/DocxMergerChartAxis.h"



namespace DocxFactory
{
	using namespace std;

	class DocxMergerPasteChartAxis;
	class DocxMergerChartAxisText : public DocxMergerChartAxis
	{
	public:
		DocxMergerChartAxisText();
		virtual ~DocxMergerChartAxisText();

		virtual size_t setValue	( DocxMergerPasteChartAxis* p_pasteAxis, const string& p_value );
		virtual size_t setValue	( DocxMergerPasteChartAxis* p_pasteAxis, double p_value );
		virtual string getValue	( DocxMergerPasteChartAxis* p_pasteAxis, size_t p_index ) const;
		virtual size_t getLength( DocxMergerPasteChartAxis* p_pasteAxis ) const;

	protected:

	private:
		DocxMergerChartAxisText( const DocxMergerChartAxisText& p_other );
		DocxMergerChartAxisText& operator = ( const DocxMergerChartAxisText& p_other );

	};
};

#endif
