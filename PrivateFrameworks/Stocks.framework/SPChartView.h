/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SPChartView : UIView <StockGraphViewContainer> {
    StockChartData * _chartData;
    unsigned int  _chartViewType;
    BOOL  _compactGraph;
    StockChartDisplayMode * _currentDisplayMode;
    <SPChartViewDelegate> * _delegate;
    StockGraphView * _graph;
    ChartLabelInfoManager * _labelInfoManager;
    int  _selectedInterval;
    BOOL  _showsHorizontalLines;
    Stock * _stock;
    NSMutableArray * _xAxisLabels;
    NSMutableArray * _yAxisLabels;
}

@property (nonatomic, retain) StockChartData *chartData;
@property (nonatomic) unsigned int chartViewType;
@property (getter=isCompactGraph, nonatomic) BOOL compactGraph;
@property (nonatomic, readonly) StockChartDisplayMode *currentDisplayMode;
@property (nonatomic) <SPChartViewDelegate> *delegate;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic) BOOL showsHorizontalLines;
@property (nonatomic, retain) Stock *stock;

- (void).cxx_destruct;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1;
- (void)_prepareYAxisLabelsAndPositions;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(BOOL)arg2;
- (void)_setHourLabels;
- (void)_setMonthAndYearLabels;
- (id)_smallCapsFontFrom:(id)arg1;
- (id)chartData;
- (unsigned int)chartViewType;
- (void)clearData;
- (id)currentDisplayMode;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })graphViewFrameForMode:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStockChartDisplayMode:(id)arg1;
- (BOOL)isCompactGraph;
- (id)labelFont;
- (void)layoutSubviews;
- (float)lineGraphBottomPadding;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineGraphFrame;
- (void)setBackgroundGradient:(struct CGGradient { }*)arg1;
- (void)setChartData:(id)arg1;
- (void)setChartViewType:(unsigned int)arg1;
- (void)setCompactGraph:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowsHorizontalLines:(BOOL)arg1;
- (void)setStock:(id)arg1;
- (void)setYAxisLabelCount:(unsigned int)arg1;
- (BOOL)showsHorizontalLines;
- (id)stock;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (float)widestYLabelWidthForMode:(id)arg1;

@end
