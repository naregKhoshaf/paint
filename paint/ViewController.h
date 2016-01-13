//
//  ViewController.h
//  paint
//
//  Created by Nareg Khoshafian on 1/12/16.
//  Copyright © 2016 Intrepid. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    CGPoint lastPoint;
    // lastPoint stores the last drawn point on the canvas. Used when a continous brush stroke is being drawn on the canvas.
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    // Store the current RGB values of the selected color
    CGFloat brush;
    CGFloat opacity;
    // Brush and Opacity store the stroke width and opacity
    BOOL mouseSwiped;
    // mouseSwiped identifies if the brush stroke is continous
}
- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)save:(id)sender;




@end

