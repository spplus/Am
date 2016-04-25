/************************************************************************/
/* 
	DESC:	��SVGͼԪ��Ⱦ��QGraphicsSvgItem����
			��Ⱦ����SVGͼ�ε�QGrahicsSencen��
	DATE:	2016-03-24
	AUTHOR:	YUANLS
*/
/************************************************************************/
#ifndef __SVGRENDER_H__
#define __SVGRENDER_H__




#include <QGraphicsScene>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>

#include "svggraph.h"
#include "svgitem.h"
//#include "structs.h"

class SvgRenderer
{
public:

	SvgRenderer(QGraphicsScene* scene);
	~SvgRenderer();

	// ��SVG�е�ͼԪ������qgraphicsitem�������뵽scene��
	void		drawGraph(SvgGraph* graph);

	// ����ID����svgItem
	SvgItem*	renderById(SvgGraph* graph,BaseDevice* pdev);

private:
	SvgItem*		makeSvgItem(QString id);
	void			setItemPos(SvgItem* item,BaseDevice* pdev);
	void			drawHeadLayer();
	void			drawTextLayer();

	SvgLayer*			findLayer(QString lid);

	SvgItem*			addItem(QString id,eDeviceType tp = eDEFAULT);
	SvgItem*			addItem(BaseDevice* pdev);

	// ��ʼ��svg
	QString				initSvgRenderer();
	
	// �ж��Ƿ���Ҫ���귴ת
	bool				isReverseCoordination(BaseDevice* pdev);

private:
	SvgGraph*		m_graph;
	QSvgRenderer*	m_renderer;
	QGraphicsScene*	m_scene;
};


#endif