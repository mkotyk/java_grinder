/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 */

#ifndef _API_PLAYSTATION2_H
#define _API_PLAYSTATION2_H

class API_Playstation2
{
public:
  virtual int playstation2_clearScreen() { return -1; }
  virtual int playstation2_waitVsync() { return -1; }
  virtual int playstation2_vu0UploadCode_aB() { return -1; }
  virtual int playstation2_vu0UploadData_aB() { return -1; }
  virtual int playstation2_vu0DownloadData_aB() { return -1; }
  virtual int playstation2_vu0Start() { return -1; }
  virtual int playstation2_vu0Stop() { return -1; }
  virtual int playstation2_vu0IsRunning() { return -1; }
};

#endif

