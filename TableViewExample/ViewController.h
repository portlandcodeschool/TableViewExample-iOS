//
//  ViewController.h
//  TableViewExample
//
//  Created by Erick Bennett on 11/23/14.
//  Copyright (c) 2014 Erick Bennett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITabBarDelegate, UITableViewDataSource>
{
    //Declare your array, or other references, here to make them available to all methods in this class. No outside objects can see this.
    NSArray *names;
    __weak IBOutlet UITableView *namesTableView;
    
}
    //Declare your array here, or other references, (as a property) to make it available to all your methods in this class (self.names) and let outside objects access this.

//@property NSArray *names;


@end

