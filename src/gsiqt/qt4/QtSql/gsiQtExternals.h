
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtSqlExternals)
#define HDR_gsiQtSqlExternals

#include "gsiClassBase.h"
#include "gsiQtSqlCommon.h"

class QSqlDatabase;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDatabase> &qtdecl_QSqlDatabase (); }

class QSqlDriver;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDriver> &qtdecl_QSqlDriver (); }

class QSqlDriverCreatorBase;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDriverCreatorBase> &qtdecl_QSqlDriverCreatorBase (); }

class QSqlError;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlError> &qtdecl_QSqlError (); }

class QSqlField;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlField> &qtdecl_QSqlField (); }

class QSqlIndex;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlIndex> &qtdecl_QSqlIndex (); }

class QSqlQuery;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlQuery> &qtdecl_QSqlQuery (); }

class QSqlQueryModel;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlQueryModel> &qtdecl_QSqlQueryModel (); }

class QSqlRecord;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRecord> &qtdecl_QSqlRecord (); }

class QSqlRelation;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRelation> &qtdecl_QSqlRelation (); }

class QSqlRelationalTableModel;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRelationalTableModel> &qtdecl_QSqlRelationalTableModel (); }

class QSqlResult;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlResult> &qtdecl_QSqlResult (); }

class QSqlTableModel;
namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlTableModel> &qtdecl_QSqlTableModel (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

