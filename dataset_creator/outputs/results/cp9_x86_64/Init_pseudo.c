
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::ios_base::Init::Init() */

void __thiscall std::ios_base::Init::Init(Init *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = stdout;
  if (__libc_single_threaded == '\0') {
    LOCK();
    UNLOCK();
  }
  if (_S_refcount == 0) {
    _S_refcount = 1;
    __gnu_internal::buf_cout_sync._8_8_ = 0;
    __gnu_internal::buf_cout_sync._16_8_ = 0;
    _S_synced_with_stdio = 1;
    __gnu_internal::buf_cout_sync._24_8_ = 0;
    __gnu_internal::buf_cout_sync._32_8_ = 0;
    __gnu_internal::buf_cout_sync._40_8_ = 0;
    __gnu_internal::buf_cout_sync._48_8_ = 0;
    __gnu_internal::buf_cout_sync._0_8_ = &PTR__streambuf_0092b4a8;
    locale::locale((locale *)(__gnu_internal::buf_cout_sync + 0x38));
    puVar2 = stdin;
    __gnu_internal::buf_cout_sync._64_8_ = puVar1;
    __gnu_internal::buf_cin_sync._0_8_ = &PTR__streambuf_0092b4a8;
    __gnu_internal::buf_cout_sync._72_4_ = 0xffffffff;
    __gnu_internal::buf_cout_sync._0_8_ = &PTR__stdio_sync_filebuf_00929aa8;
    __gnu_internal::buf_cin_sync._8_8_ = 0;
    __gnu_internal::buf_cin_sync._16_8_ = 0;
    __gnu_internal::buf_cin_sync._24_8_ = 0;
    __gnu_internal::buf_cin_sync._32_8_ = 0;
    __gnu_internal::buf_cin_sync._40_8_ = 0;
    __gnu_internal::buf_cin_sync._48_8_ = 0;
    locale::locale((locale *)(__gnu_internal::buf_cin_sync + 0x38));
    puVar1 = stderr;
    __gnu_internal::buf_cin_sync._64_8_ = puVar2;
    __gnu_internal::buf_cerr_sync._0_8_ = &PTR__streambuf_0092b4a8;
    __gnu_internal::buf_cin_sync._0_8_ = &PTR__stdio_sync_filebuf_00929aa8;
    __gnu_internal::buf_cin_sync._72_4_ = 0xffffffff;
    __gnu_internal::buf_cerr_sync._8_8_ = 0;
    __gnu_internal::buf_cerr_sync._16_8_ = 0;
    __gnu_internal::buf_cerr_sync._24_8_ = 0;
    __gnu_internal::buf_cerr_sync._32_8_ = 0;
    __gnu_internal::buf_cerr_sync._40_8_ = 0;
    __gnu_internal::buf_cerr_sync._48_8_ = 0;
    locale::locale((locale *)(__gnu_internal::buf_cerr_sync + 0x38));
    __gnu_internal::buf_cerr_sync._64_8_ = puVar1;
    __gnu_internal::buf_cerr_sync._0_8_ = &PTR__stdio_sync_filebuf_00929aa8;
    __gnu_internal::buf_cerr_sync._72_4_ = 0xffffffff;
    ios_base((ios_base *)&DAT_009367a8);
    _DAT_00936888 = 0;
    _DAT_00936880 = 0;
    cout = 0x92b3e0;
    DAT_00936890 = 0;
    DAT_00936898 = 0;
    DAT_009368a0 = 0;
    DAT_009368a8 = 0;
    DAT_009367a8 = 0x92b408;
                    /* try { // try from 00623248 to 0062324c has its CatchHandler @ 006237b0 */
    ios::init((ios *)&DAT_009367a8,(streambuf *)__gnu_internal::buf_cout_sync);
    ios_base((ios_base *)&DAT_009368d0);
    DAT_009369a8 = (undefined8 *)0x0;
    _DAT_009369b0 = 0;
    _DAT_009369b8 = 0;
    _DAT_009369c0 = 0;
    _DAT_009369c8 = 0;
    _DAT_009369d0 = 0;
    cin = 0x92a940;
    DAT_009368d0 = 0x92a968;
    DAT_009368c8 = 0;
                    /* try { // try from 006232ca to 006232ce has its CatchHandler @ 006237bc */
    ios::init((ios *)&DAT_009368d0,(streambuf *)__gnu_internal::buf_cin_sync);
    ios_base((ios_base *)&DAT_00936688);
    cerr = 0x92b3e0;
    DAT_00936760 = (undefined8 *)0x0;
    DAT_00936768 = 0;
    DAT_00936770 = 0;
    DAT_00936778 = 0;
    DAT_00936780 = 0;
    DAT_00936788 = 0;
    DAT_00936688 = 0x92b408;
                    /* try { // try from 0062333b to 0062333f has its CatchHandler @ 006237c8 */
    ios::init((ios *)&DAT_00936688,(streambuf *)__gnu_internal::buf_cerr_sync);
    ios_base((ios_base *)&DAT_00936568);
    _DAT_00936640 = 0;
    _DAT_00936648 = 0;
    clog = 0x92b3e0;
    DAT_00936650 = 0;
    DAT_00936658 = 0;
    DAT_00936660 = 0;
    DAT_00936668 = 0;
    DAT_00936568 = 0x92b408;
                    /* try { // try from 006233b1 to 006233b5 has its CatchHandler @ 006237d4 */
    ios::init((ios *)&DAT_00936568,(streambuf *)__gnu_internal::buf_cerr_sync);
    puVar1 = stdout;
    DAT_009366a0 = DAT_009366a0 | 0x2000;
    DAT_009369a8 = &cout;
    DAT_00936760 = &cout;
    __gnu_internal::buf_wcout_sync._8_8_ = 0;
    __gnu_internal::buf_wcout_sync._16_8_ = 0;
    __gnu_internal::buf_wcout_sync._24_8_ = 0;
    __gnu_internal::buf_wcout_sync._0_8_ = &PTR__wstreambuf_0092b528;
    __gnu_internal::buf_wcout_sync._32_8_ = 0;
    __gnu_internal::buf_wcout_sync._40_8_ = 0;
    __gnu_internal::buf_wcout_sync._48_8_ = 0;
    locale::locale((locale *)(__gnu_internal::buf_wcout_sync + 0x38));
    puVar2 = stdin;
    __gnu_internal::buf_wcout_sync._64_8_ = puVar1;
    __gnu_internal::buf_wcin_sync._0_8_ = &PTR__wstreambuf_0092b528;
    __gnu_internal::buf_wcout_sync._72_4_ = 0xffffffff;
    __gnu_internal::buf_wcout_sync._0_8_ = &PTR__stdio_sync_filebuf_00929b28;
    __gnu_internal::buf_wcin_sync._8_8_ = 0;
    __gnu_internal::buf_wcin_sync._16_8_ = 0;
    __gnu_internal::buf_wcin_sync._24_8_ = 0;
    __gnu_internal::buf_wcin_sync._32_8_ = 0;
    __gnu_internal::buf_wcin_sync._40_8_ = 0;
    __gnu_internal::buf_wcin_sync._48_8_ = 0;
    locale::locale((locale *)(__gnu_internal::buf_wcin_sync + 0x38));
    puVar1 = stderr;
    __gnu_internal::buf_wcin_sync._64_8_ = puVar2;
    __gnu_internal::buf_wcerr_sync._0_8_ = &PTR__wstreambuf_0092b528;
    __gnu_internal::buf_wcin_sync._0_8_ = &PTR__stdio_sync_filebuf_00929b28;
    __gnu_internal::buf_wcin_sync._72_4_ = 0xffffffff;
    __gnu_internal::buf_wcerr_sync._8_8_ = 0;
    __gnu_internal::buf_wcerr_sync._16_8_ = 0;
    __gnu_internal::buf_wcerr_sync._24_8_ = 0;
    __gnu_internal::buf_wcerr_sync._32_8_ = 0;
    __gnu_internal::buf_wcerr_sync._40_8_ = 0;
    __gnu_internal::buf_wcerr_sync._48_8_ = 0;
    locale::locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x38));
    __gnu_internal::buf_wcerr_sync._64_8_ = puVar1;
    __gnu_internal::buf_wcerr_sync._0_8_ = &PTR__stdio_sync_filebuf_00929b28;
    __gnu_internal::buf_wcerr_sync._72_4_ = 0xffffffff;
    ios_base((ios_base *)&DAT_00936328);
    _DAT_00936400 = 0;
    _DAT_00936408 = 0;
    wcout = 0x92b440;
    DAT_0093640c = 0;
    DAT_00936410 = 0;
    DAT_00936418 = 0;
    DAT_00936420 = 0;
    DAT_00936428 = 0;
    DAT_00936328 = 0x92b468;
                    /* try { // try from 006235cd to 006235d1 has its CatchHandler @ 006237e0 */
    wios::init((wios *)&DAT_00936328,(wstreambuf *)__gnu_internal::buf_wcout_sync);
    ios_base((ios_base *)&DAT_00936450);
    DAT_00936528 = (undefined8 *)0x0;
    DAT_00936534 = 0;
    _DAT_00936530 = 0;
    _DAT_00936538 = 0;
    _DAT_00936540 = 0;
    _DAT_00936548 = 0;
    _DAT_00936550 = 0;
    wcin = 0x92a9a0;
    DAT_00936450 = 0x92a9c8;
    DAT_00936448 = 0;
                    /* try { // try from 00623658 to 0062365c has its CatchHandler @ 006237ec */
    wios::init((wios *)&DAT_00936450,(wstreambuf *)__gnu_internal::buf_wcin_sync);
    ios_base((ios_base *)&DAT_00936208);
    DAT_009362ec = 0;
    wcerr = 0x92b440;
    DAT_009362e0 = (undefined8 *)0x0;
    DAT_009362e8 = 0;
    DAT_009362f0 = 0;
    DAT_009362f8 = 0;
    DAT_00936300 = 0;
    DAT_00936308 = 0;
    DAT_00936208 = 0x92b468;
                    /* try { // try from 006236d1 to 006236d5 has its CatchHandler @ 006237f8 */
    wios::init((wios *)&DAT_00936208,(wstreambuf *)__gnu_internal::buf_wcerr_sync);
    ios_base((ios_base *)&DAT_009360e8);
    _DAT_009361c0 = 0;
    wclog = 0x92b440;
    DAT_009361c8 = 0;
    DAT_009361cc = 0;
    DAT_009361d0 = 0;
    DAT_009361d8 = 0;
    DAT_009361e0 = 0;
    DAT_009361e8 = 0;
    DAT_009360e8 = 0x92b468;
                    /* try { // try from 00623750 to 00623754 has its CatchHandler @ 006237a4 */
    wios::init((wios *)&DAT_009360e8,(wstreambuf *)__gnu_internal::buf_wcerr_sync);
    DAT_00936220 = DAT_00936220 | 0x2000;
    DAT_00936528 = &wcout;
    DAT_009362e0 = &wcout;
    if (__libc_single_threaded != '\0') {
      _S_refcount = _S_refcount + 1;
      return;
    }
    LOCK();
    _S_refcount = _S_refcount + 1;
    UNLOCK();
    return;
  }
  _S_refcount = _S_refcount + 1;
  return;
}

