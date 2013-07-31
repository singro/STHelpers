//
//  STCodeSnippet.h
//  Helpers
//
//  Created by Singro Tsen on 7/31/13.
//
//

#import <Foundation/Foundation.h>

@interface STCodeSnippet : NSObject

// UIButton
UIButton *button = [UIButton buttonWithType:<#UIButtonTypeName#>];
[button setFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[button setBackgroundImage:[UIImage imageNamed:@"<#imageName#>"] forState:UIControlStateNormal];
[button setBackgroundImage:[UIImage imageNamed:@"<#imageName#>"] forState:UIControlStateHighlighted];
[button addTarget:self action:@selector(<#selector#>) forControlEvents:UIControlEventTouchUpInside];
[<#superViewName#> addSubview:button];

// UIImage
UIImageView *imageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"<#imageName#>"]];
[imageView setFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[<#superViewName#> addSubview:imageView];

// UIImage Resizable
UIImage *image = [UIImage imageNamed:@"<#imageName#>"];
image = [image resizableImageWithCapInsets:UIEdgeInsetsMake(28.0f, 46.0f, 22.0f, 10.0f)];
UIImageView *imageView = [[UIImageView alloc] initWithImage:image];
[imageView setFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[imageView setUserInteractionEnabled:NO];
[<#superViewName#> addSubview:imageView];

// UILabel
UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[label setText:@""];
[label setFont:[UIFont systemFontOfSize:15.0f]];
[label setBackgroundColor:[UIColor clearColor]];
[label setTextAlignment:NSTextAlignmentRight];
[label setTextColor:[UIColor redColor]];
[<#superViewName#> addSubview:label];

// UISlider
UISlider *slider = [[UISlider alloc] initWithFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[slider setValue:1.25f];
[slider addTarget:self action:@selector(<#selector#>))
 forControlEvents:UIControlEventValueChanged];
[<#superView#> addSubview:slider];

// UITableView
UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];
[tableView setDataSource:self];
[tableView setDelegate:self];
[tableView setSeparatorStyle:<#(UITableViewCellSeparatorStyle)#>];
[<#superView#> addSubview:tableView];

// UIView
UIView *<#viewName#> = [[UIView alloc] initWithFrame:CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>)];

// NSLog
NSLog(@"<#String#>");

// UITableView Delegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:<#(UITableViewCellStyle)#> reuseIdentifier:<#(NSString *)#>];
    if (cell != Nil) {
        <#statements#>
    }
    return cell;
}

// UIView Animation with completion
[UIView animateWithDuration:<#(NSTimeInterval)#> animations:^{
    <#code#>
} completion:^(BOOL finished) {
    <#code#>
}];

// UIView Animation
[UIView animateWithDuration:<#(NSTimeInterval)#> animations:^{
    <#code#>
}];


@end
