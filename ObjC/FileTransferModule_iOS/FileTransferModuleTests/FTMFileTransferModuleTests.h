/******************************************************************************
 * Copyright 2013, Qualcomm Innovation Center, Inc.
 *
 *    All rights reserved.
 *    This file is licensed under the 3-clause BSD license in the NOTICE.txt
 *    file for this project. A copy of the 3-clause BSD license is found at:
 *
 *        http://opensource.org/licenses/BSD-3-Clause.
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the license is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the license for the specific language governing permissions and
 *    limitations under the license.
 ******************************************************************************/

#import <SenTestingKit/SenTestingKit.h>
#import "FTMFileAnnouncementReceivedDelegate.h"
#import "FTMUnannouncedFileRequestDelegate.h"
#import "FTMOfferReceivedDelegate.h"    


@interface FTMFileTransferModuleTests : SenTestCase <AJNSessionPortListener, AJNSessionListener, AJNBusListener, FTMFileAnnouncementReceivedDelegate, FTMUnannouncedFileRequestDelegate, FTMOfferReceivedDelegate>
@end
