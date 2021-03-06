// Copyright (c) 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE-CHROMIUM file.

#ifndef BRIGHTRAY_BROWSER_WIN_SCOPED_HSTRING_H_
#define BRIGHTRAY_BROWSER_WIN_SCOPED_HSTRING_H_

#include <string>

#include <hstring.h>
#include <windows.h>

#include "base/basictypes.h"

class ScopedHString {
 public:
  // Copy from |source|.
  ScopedHString(const wchar_t* source);
  ScopedHString(const std::wstring& source);
  // Create empty string.
  ScopedHString();
  ~ScopedHString();

  // Sets to |source|.
  void Set(const wchar_t* source);

  // Returns string.
  operator HSTRING() const { return str_; }

  // Whether there is a string created.
  bool success() const { return str_; }

 private:
  HSTRING str_;

  DISALLOW_COPY_AND_ASSIGN(ScopedHString);
};

#endif  // BRIGHTRAY_BROWSER_WIN_SCOPED_HSTRING_H_
