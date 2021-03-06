// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Felix Rieseberg <feriese@microsoft.com> and Jason Poon <jason.poon@microsoft.com>. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE-CHROMIUM file.

// Usage Example (JavaScript:
// var windowsNotification = new Notification("Test Title", {
// 	body: "Hi, I'm an example body. How are you?",
// 	icon: "file:///C:/Path/To/Your/Image.png"
// });

// windowsNotification.onshow  = function () { console.log("Notification shown") };
// windowsNotification.onclick = function () { console.log("Notification clicked") };
// windowsNotification.onclose = function () { console.log("Notification dismissed") };

#ifndef BRIGHTRAY_BROWSER_WIN_NOTIFICATION_PRESENTER_WIN_H_
#define BRIGHTRAY_BROWSER_WIN_NOTIFICATION_PRESENTER_WIN_H_

#include "browser/notification_presenter.h"

namespace brightray {

class NotificationPresenterWin : public NotificationPresenter {
 public:
  NotificationPresenterWin();
  ~NotificationPresenterWin();

  void ShowNotification(
      const content::PlatformNotificationData&,
      const SkBitmap& icon,
      scoped_ptr<content::DesktopNotificationDelegate> delegate,
      base::Closure* cancel_callback) override;

 private:
  DISALLOW_COPY_AND_ASSIGN(NotificationPresenterWin);
};

}  // namespace

#endif  // BRIGHTRAY_BROWSER_WIN_NOTIFICATION_PRESENTER_WIN_H_
