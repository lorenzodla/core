/*
 * $Id$
 */

/* -------------------------------------------------------------------- */
/* WARNING: Automatically generated source file. DO NOT EDIT!           */
/*          Instead, edit corresponding .qth file,                      */
/*          or the generator tool itself, and run regenarate.           */
/* -------------------------------------------------------------------- */

/*
 * Harbour Project source code:
 * QT wrapper main header
 *
 * Copyright 2009-2010 Pritpal Bedi <pritpal@vouchcac.com>
 *
 * Copyright 2009 Marcos Antonio Gambeta <marcosgambeta at gmail dot com>
 * www - http://harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */
/*----------------------------------------------------------------------*/

#include "hbqt.h"
#include "hbqtgui_garbage.h"
#include "hbqtcore_garbage.h"

/*----------------------------------------------------------------------*/
#if QT_VERSION >= 0x040500
/*----------------------------------------------------------------------*/

/*
 *  enum WizardButton { BackButton, NextButton, CommitButton, FinishButton, ..., Stretch }
 *  enum WizardOption { IndependentPages, IgnoreSubTitles, ExtendedWatermarkPixmap, NoDefaultButton, ..., HaveCustomButton3 }
 *  enum WizardPixmap { WatermarkPixmap, LogoPixmap, BannerPixmap, BackgroundPixmap }
 *  enum WizardStyle { ClassicStyle, ModernStyle, MacStyle, AeroStyle }
 *  flags WizardOptions
 */

/*
 *  Constructed[ 35/36 [ 97.22% ] ]
 *
 *  *** Unconvered Prototypes ***
 *  -----------------------------
 *
 *  void setButtonLayout ( const QList<WizardButton> & layout )
 */

#include <QtCore/QPointer>

#include <QtGui/QWizard>
#include <QtCore/QVariant>


/*
 * QWizard ( QWidget * parent = 0, Qt::WindowFlags flags = 0 )
 * ~QWizard ()
 */

typedef struct
{
   QPointer< QWizard > ph;
   bool bNew;
   QT_G_FUNC_PTR func;
   int type;
} QGC_POINTER_QWizard;

QT_G_FUNC( hbqt_gcRelease_QWizard )
{
   QWizard  * ph = NULL ;
   QGC_POINTER_QWizard * p = ( QGC_POINTER_QWizard * ) Cargo;

   if( p && p->bNew && p->ph )
   {
      ph = p->ph;
      if( ph )
      {
         const QMetaObject * m = ( ph )->metaObject();
         if( ( QString ) m->className() != ( QString ) "QObject" )
         {
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p %p YES_rel_QWizard   /.\\   ", (void*) ph, (void*) p->ph ) );
            delete ( p->ph );
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p %p YES_rel_QWizard   \\./   ", (void*) ph, (void*) p->ph ) );
            p->ph = NULL;
         }
         else
         {
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p NO__rel_QWizard          ", ph ) );
            p->ph = NULL;
         }
      }
      else
      {
         HB_TRACE( HB_TR_DEBUG, ( "ph=%p DEL_rel_QWizard    :     Object already deleted!", ph ) );
         p->ph = NULL;
      }
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p PTR_rel_QWizard    :    Object not created with new=true", ph ) );
      p->ph = NULL;
   }
}

void * hbqt_gcAllocate_QWizard( void * pObj, bool bNew )
{
   QGC_POINTER_QWizard * p = ( QGC_POINTER_QWizard * ) hb_gcAllocate( sizeof( QGC_POINTER_QWizard ), hbqt_gcFuncs() );

   new( & p->ph ) QPointer< QWizard >( ( QWizard * ) pObj );
   p->bNew = bNew;
   p->func = hbqt_gcRelease_QWizard;
   p->type = HBQT_TYPE_QWizard;

   if( bNew )
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p    _new_QWizard  under p->pq", pObj ) );
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p NOT_new_QWizard", pObj ) );
   }
   return p;
}

HB_FUNC( QT_QWIZARD )
{
   QWizard * pObj = NULL;

   pObj = new QWizard( hbqt_par_QWidget( 2 ) ) ;

   hb_retptrGC( hbqt_gcAllocate_QWizard( ( void * ) pObj, true ) );
}

/*
 * int addPage ( QWizardPage * page )
 */
HB_FUNC( QT_QWIZARD_ADDPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( p )->addPage( hbqt_par_QWizardPage( 2 ) ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_ADDPAGE FP=hb_retni( ( p )->addPage( hbqt_par_QWizardPage( 2 ) ) ); p is NULL" ) );
   }
}

/*
 * QAbstractButton * button ( WizardButton which ) const
 */
HB_FUNC( QT_QWIZARD_BUTTON )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QAbstractButton( ( p )->button( ( QWizard::WizardButton ) hb_parni( 2 ) ), false ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_BUTTON FP=hb_retptrGC( hbqt_gcAllocate_QAbstractButton( ( p )->button( ( QWizard::WizardButton ) hb_parni( 2 ) ), false ) ); p is NULL" ) );
   }
}

/*
 * QString buttonText ( WizardButton which ) const
 */
HB_FUNC( QT_QWIZARD_BUTTONTEXT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retc( ( p )->buttonText( ( QWizard::WizardButton ) hb_parni( 2 ) ).toAscii().data() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_BUTTONTEXT FP=hb_retc( ( p )->buttonText( ( QWizard::WizardButton ) hb_parni( 2 ) ).toAscii().data() ); p is NULL" ) );
   }
}

/*
 * int currentId () const
 */
HB_FUNC( QT_QWIZARD_CURRENTID )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( p )->currentId() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_CURRENTID FP=hb_retni( ( p )->currentId() ); p is NULL" ) );
   }
}

/*
 * QWizardPage * currentPage () const
 */
HB_FUNC( QT_QWIZARD_CURRENTPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QWizardPage( ( p )->currentPage(), false ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_CURRENTPAGE FP=hb_retptrGC( hbqt_gcAllocate_QWizardPage( ( p )->currentPage(), false ) ); p is NULL" ) );
   }
}

/*
 * QVariant field ( const QString & name ) const
 */
HB_FUNC( QT_QWIZARD_FIELD )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QVariant( new QVariant( ( p )->field( QWizard::tr( hb_parc( 2 ) ) ) ), true ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_FIELD FP=hb_retptrGC( hbqt_gcAllocate_QVariant( new QVariant( ( p )->field( QWizard::tr( hb_parc( 2 ) ) ) ), true ) ); p is NULL" ) );
   }
}

/*
 * bool hasVisitedPage ( int id ) const
 */
HB_FUNC( QT_QWIZARD_HASVISITEDPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retl( ( p )->hasVisitedPage( hb_parni( 2 ) ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_HASVISITEDPAGE FP=hb_retl( ( p )->hasVisitedPage( hb_parni( 2 ) ) ); p is NULL" ) );
   }
}

/*
 * virtual int nextId () const
 */
HB_FUNC( QT_QWIZARD_NEXTID )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( p )->nextId() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_NEXTID FP=hb_retni( ( p )->nextId() ); p is NULL" ) );
   }
}

/*
 * WizardOptions options () const
 */
HB_FUNC( QT_QWIZARD_OPTIONS )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( QWizard::WizardOptions ) ( p )->options() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_OPTIONS FP=hb_retni( ( QWizard::WizardOptions ) ( p )->options() ); p is NULL" ) );
   }
}

/*
 * QWizardPage * page ( int id ) const
 */
HB_FUNC( QT_QWIZARD_PAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QWizardPage( ( p )->page( hb_parni( 2 ) ), false ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_PAGE FP=hb_retptrGC( hbqt_gcAllocate_QWizardPage( ( p )->page( hb_parni( 2 ) ), false ) ); p is NULL" ) );
   }
}

/*
 * QList<int> pageIds () const
 */
HB_FUNC( QT_QWIZARD_PAGEIDS )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QList( new QList<int>( ( p )->pageIds() ), true ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_PAGEIDS FP=hb_retptrGC( hbqt_gcAllocate_QList( new QList<int>( ( p )->pageIds() ), true ) ); p is NULL" ) );
   }
}

/*
 * QPixmap pixmap ( WizardPixmap which ) const
 */
HB_FUNC( QT_QWIZARD_PIXMAP )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QPixmap( new QPixmap( ( p )->pixmap( ( QWizard::WizardPixmap ) hb_parni( 2 ) ) ), true ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_PIXMAP FP=hb_retptrGC( hbqt_gcAllocate_QPixmap( new QPixmap( ( p )->pixmap( ( QWizard::WizardPixmap ) hb_parni( 2 ) ) ), true ) ); p is NULL" ) );
   }
}

/*
 * void removePage ( int id )
 */
HB_FUNC( QT_QWIZARD_REMOVEPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->removePage( hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_REMOVEPAGE FP=( p )->removePage( hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setButton ( WizardButton which, QAbstractButton * button )
 */
HB_FUNC( QT_QWIZARD_SETBUTTON )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setButton( ( QWizard::WizardButton ) hb_parni( 2 ), hbqt_par_QAbstractButton( 3 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETBUTTON FP=( p )->setButton( ( QWizard::WizardButton ) hb_parni( 2 ), hbqt_par_QAbstractButton( 3 ) ); p is NULL" ) );
   }
}

/*
 * void setButtonText ( WizardButton which, const QString & text )
 */
HB_FUNC( QT_QWIZARD_SETBUTTONTEXT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setButtonText( ( QWizard::WizardButton ) hb_parni( 2 ), QWizard::tr( hb_parc( 3 ) ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETBUTTONTEXT FP=( p )->setButtonText( ( QWizard::WizardButton ) hb_parni( 2 ), QWizard::tr( hb_parc( 3 ) ) ); p is NULL" ) );
   }
}

/*
 * void setDefaultProperty ( const char * className, const char * property, const char * changedSignal )
 */
HB_FUNC( QT_QWIZARD_SETDEFAULTPROPERTY )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setDefaultProperty( hbqt_par_char( 2 ), hbqt_par_char( 3 ), hbqt_par_char( 4 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETDEFAULTPROPERTY FP=( p )->setDefaultProperty( hbqt_par_char( 2 ), hbqt_par_char( 3 ), hbqt_par_char( 4 ) ); p is NULL" ) );
   }
}

/*
 * void setField ( const QString & name, const QVariant & value )
 */
HB_FUNC( QT_QWIZARD_SETFIELD )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setField( QWizard::tr( hb_parc( 2 ) ), *hbqt_par_QVariant( 3 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETFIELD FP=( p )->setField( QWizard::tr( hb_parc( 2 ) ), *hbqt_par_QVariant( 3 ) ); p is NULL" ) );
   }
}

/*
 * void setOption ( WizardOption option, bool on = true )
 */
HB_FUNC( QT_QWIZARD_SETOPTION )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setOption( ( QWizard::WizardOption ) hb_parni( 2 ), hb_parl( 3 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETOPTION FP=( p )->setOption( ( QWizard::WizardOption ) hb_parni( 2 ), hb_parl( 3 ) ); p is NULL" ) );
   }
}

/*
 * void setOptions ( WizardOptions options )
 */
HB_FUNC( QT_QWIZARD_SETOPTIONS )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setOptions( ( QWizard::WizardOptions ) hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETOPTIONS FP=( p )->setOptions( ( QWizard::WizardOptions ) hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setPage ( int id, QWizardPage * page )
 */
HB_FUNC( QT_QWIZARD_SETPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setPage( hb_parni( 2 ), hbqt_par_QWizardPage( 3 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETPAGE FP=( p )->setPage( hb_parni( 2 ), hbqt_par_QWizardPage( 3 ) ); p is NULL" ) );
   }
}

/*
 * void setPixmap ( WizardPixmap which, const QPixmap & pixmap )
 */
HB_FUNC( QT_QWIZARD_SETPIXMAP )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setPixmap( ( QWizard::WizardPixmap ) hb_parni( 2 ), *hbqt_par_QPixmap( 3 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETPIXMAP FP=( p )->setPixmap( ( QWizard::WizardPixmap ) hb_parni( 2 ), *hbqt_par_QPixmap( 3 ) ); p is NULL" ) );
   }
}

/*
 * void setStartId ( int id )
 */
HB_FUNC( QT_QWIZARD_SETSTARTID )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setStartId( hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETSTARTID FP=( p )->setStartId( hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setSubTitleFormat ( Qt::TextFormat format )
 */
HB_FUNC( QT_QWIZARD_SETSUBTITLEFORMAT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setSubTitleFormat( ( Qt::TextFormat ) hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETSUBTITLEFORMAT FP=( p )->setSubTitleFormat( ( Qt::TextFormat ) hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setTitleFormat ( Qt::TextFormat format )
 */
HB_FUNC( QT_QWIZARD_SETTITLEFORMAT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setTitleFormat( ( Qt::TextFormat ) hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETTITLEFORMAT FP=( p )->setTitleFormat( ( Qt::TextFormat ) hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setWizardStyle ( WizardStyle style )
 */
HB_FUNC( QT_QWIZARD_SETWIZARDSTYLE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->setWizardStyle( ( QWizard::WizardStyle ) hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SETWIZARDSTYLE FP=( p )->setWizardStyle( ( QWizard::WizardStyle ) hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * int startId () const
 */
HB_FUNC( QT_QWIZARD_STARTID )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( p )->startId() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_STARTID FP=hb_retni( ( p )->startId() ); p is NULL" ) );
   }
}

/*
 * Qt::TextFormat subTitleFormat () const
 */
HB_FUNC( QT_QWIZARD_SUBTITLEFORMAT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( Qt::TextFormat ) ( p )->subTitleFormat() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_SUBTITLEFORMAT FP=hb_retni( ( Qt::TextFormat ) ( p )->subTitleFormat() ); p is NULL" ) );
   }
}

/*
 * bool testOption ( WizardOption option ) const
 */
HB_FUNC( QT_QWIZARD_TESTOPTION )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retl( ( p )->testOption( ( QWizard::WizardOption ) hb_parni( 2 ) ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_TESTOPTION FP=hb_retl( ( p )->testOption( ( QWizard::WizardOption ) hb_parni( 2 ) ) ); p is NULL" ) );
   }
}

/*
 * Qt::TextFormat titleFormat () const
 */
HB_FUNC( QT_QWIZARD_TITLEFORMAT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( Qt::TextFormat ) ( p )->titleFormat() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_TITLEFORMAT FP=hb_retni( ( Qt::TextFormat ) ( p )->titleFormat() ); p is NULL" ) );
   }
}

/*
 * virtual bool validateCurrentPage ()
 */
HB_FUNC( QT_QWIZARD_VALIDATECURRENTPAGE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retl( ( p )->validateCurrentPage() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_VALIDATECURRENTPAGE FP=hb_retl( ( p )->validateCurrentPage() ); p is NULL" ) );
   }
}

/*
 * QList<int> visitedPages () const
 */
HB_FUNC( QT_QWIZARD_VISITEDPAGES )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QList( new QList<int>( ( p )->visitedPages() ), true ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_VISITEDPAGES FP=hb_retptrGC( hbqt_gcAllocate_QList( new QList<int>( ( p )->visitedPages() ), true ) ); p is NULL" ) );
   }
}

/*
 * WizardStyle wizardStyle () const
 */
HB_FUNC( QT_QWIZARD_WIZARDSTYLE )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      hb_retni( ( QWizard::WizardStyle ) ( p )->wizardStyle() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_WIZARDSTYLE FP=hb_retni( ( QWizard::WizardStyle ) ( p )->wizardStyle() ); p is NULL" ) );
   }
}

/*
 * void back ()
 */
HB_FUNC( QT_QWIZARD_BACK )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->back();
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_BACK FP=( p )->back(); p is NULL" ) );
   }
}

/*
 * void next ()
 */
HB_FUNC( QT_QWIZARD_NEXT )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->next();
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_NEXT FP=( p )->next(); p is NULL" ) );
   }
}

/*
 * void restart ()
 */
HB_FUNC( QT_QWIZARD_RESTART )
{
   QWizard * p = hbqt_par_QWizard( 1 );
   if( p )
      ( p )->restart();
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QWIZARD_RESTART FP=( p )->restart(); p is NULL" ) );
   }
}


/*----------------------------------------------------------------------*/
#endif             /* #if QT_VERSION >= 0x040500 */
/*----------------------------------------------------------------------*/