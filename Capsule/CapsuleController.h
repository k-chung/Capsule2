//
//  CapsuleController.h
//  Capsule
//
//  Created by Sneha Sankavaram on 10/4/14.
//  Copyright (c) 2014 Mask. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CapsuleController : UIViewController<UIImagePickerControllerDelegate>{
    
    IBOutlet UIImageView *ImageView;
    UIImagePickerController *picker;
    UIImage *image;
}

- (IBAction) takePicture;
- (IBAction) choosePicture;

@end
