/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2011 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */
#ifndef __xiPropertyObserver_H__
#define __xiPropertyObserver_H__

#include <string>

#include "xiObserver.h"

class xtObject;

class xiPropertyObserver : public xiObserver
{
  public:
    virtual ~xiPropertyObserver();

    virtual void propertyChanged(xtObject * object, const std::string & property, int role) = 0;
  
  protected:
    xiPropertyObserver();
};

#endif
