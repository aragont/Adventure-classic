/* = common blocks for adventure === include file === */

/* - parameters --- current limits: */

                        /* === РАЗМЕРЫ МАССИВОВ === */
#define vocw 550        /* РАЗМЕР СЛОВАРЯ */
#define loct 254        /* locations */
#define objt 127        /* objects */
#define fixt 200        /* locations for fixed objects */
#define sttt (objt*2)   /* different states of objects */
#define actw 60         /* "action" verbs */
#define ranm 400        /* random messages */
#define plcl 12         /* different player classifications. */

                        /* === ТИПЫ СЛОВ === */
#define movewr 0        /* НАПРАВЛЕНИЕ ДВИЖЕНИЯ */
#define objcwr 1        /* ОБ'ekt */
#define actnwr 2        /* ДЕЙСТВИЕ c ОБ'ektom */
#define specwr 3        /* СПЕЦ-СЛОВО */


/* there are also limits which cannot be exceeded due to the structure */
/* of the database. these upper limits are: */
/*      1000 non-synonymous vocabulary words */
/*       255 locations */
/*       127 objects */
/*       511 random messages */
/*       255 states of objects */


/* --- messages --- */
extern int  abb;                      /* ФЛАГ: НУЖНО ЛИ ПОЛНОЕ ОПИСАНИЕ */
extern unsigned  _rtext[ranm];        /* АДРЕСА РАЗНЫХ СООБЩЕНИЙ */
#define    rtext(x) _rtext[(x)-1]
extern unsigned  _ltext[loct];        /* - " -  ДЛИННЫХ ОПИСАНИЙ ПОЗИЦИИ */
#define    ltext(x) _ltext[(x)-1]
extern unsigned  _stext[loct];        /* - " -  КОРОТКИХ ОПИСАНИЙ ПОЗИЦИИ*/
#define    stext(x) _stext[(x)-1]
extern unsigned  _ctext[plcl];        /* - " -  КВАЛИФИКАЦИЙ ИГРОКА */
#define    ctext(x) _ctext[(x)-1]
extern unsigned  _cval[plcl];         /* ПОРОГИ КВАЛИФИКАЦИИ ИГРОКА */
#define    cval(x) _cval[(x)-1]
extern unsigned  _ptext[objt];        /* ИНДЕКСЫ СООБЩ. o СВОЙСТ.ОБ'ektob*/
#define    ptext(x) _ptext[(x)-1]
extern unsigned  _pstat[sttt];        /* ИНДЕКСЫ СООБЩ. o СВОЙСТ.ОБ'ektob*/
#define    pstat(x) _pstat[(x)-1]
extern char _abrev[loct];             /* ФЛАГИ: НАДО СОКРАЩЕННОЕ ОПИСАНИЕ*/
#define    abrev(x) _abrev[(x)-1]


/* --- travels + actions --- */
extern unsigned  _trvkey[loct];       /* ТАБЛИЦА НАЧАЛА ГРАФА ДАННОЙ ПОЗ. */
#define    trvkey(x) _trvkey[(x)-1]
extern unsigned  _actkey[actw];       /*  -/-    -/-  РЕАКЦИИ ha ДЕЙСТВИЕ */
#define    actkey(x) _actkey[(x)-1]


/* --- vocabulary --- */
extern int  nvoc;                     /* ЧИСЛО СЛОВ b СЛОВАРЕ */
extern int  _ktab[vocw];              /* ЧИСЛА - ЗНАЧЕНИЯ СЛОВ */
#define    ktab(x) _ktab[(x)-1]
extern long _atab[vocw];              /* СЛОВА - ПО 4 БУКВЫ */
#define    atab(x) _atab[(x)-1]

/* --- state --- */
#define inipro  255           /* НАЧАЛЬ. СОСТОЯНИЕ ДЛЯ СОКРОВИЩ */
#define nulobj  255           /* ОТСУТСТВУЮЩИЙ ОБ"ekt */
#define caried  1000          /* mapkep - ОБ'ekt НЕСУТ */

extern int  rndini;
extern int  loc;                      /* ТЕКУЩАЯ ПОЗИЦИЯ */
extern int  tally;                    /* ЧИСЛО ЕЩЕ НЕ ОБНАРУЖ. СОКРОВИЩ */
extern int  treasr;                   /* homep 1-ОГО ОБ'ekta-СОКРОВИЩА */
extern int  rndini;                   /* СЛУЧ.ЧИСЛО ДАННОЙ ПАРТИИ */
extern unsigned  tevent;              /* УКАЗАТЕЛЬ ТАБЛИЦЫ СЛУЧ.СОБЫТИЙ */
extern unsigned  eevent;              /* КОНЕЦ ТАБЛИЦЫ СЛУЧАЙНЫХ СОБЫТИЙ */
extern unsigned  tiniti;              /* -/-  -/- ИНИЦИАЛИЗАЦИИ */
extern int  _place[loct];             /* ПОЗИЦИЯ ОБЪЕКТА ИЛИ -[ИНДЕКС] */
#define    place(x) _place[(x)-1]
extern char _fixed[fixt];             /*    ДЛЯ ФИКСИРОВАННЫХ ОБ'ektob */
#define    fixed(x) _fixed[(x)-1]
extern char _prop[objt];              /* СВОЙСТВО ОБ'ektА */
#define    prop(x) _prop[(x)-1]
