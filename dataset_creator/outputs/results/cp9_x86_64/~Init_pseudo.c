
/* std::ios_base::Init::~Init() */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
  if (__libc_single_threaded == '\0') {
    LOCK();
    UNLOCK();
  }
  if (_S_refcount == 2) {
    _S_refcount = 1;
                    /* try { // try from 00623851 to 00623891 has its CatchHandler @ 00623897 */
    ostream::flush((ostream *)&cout);
    ostream::flush((ostream *)&cerr);
    ostream::flush((ostream *)&clog);
    wostream::flush((wostream *)&wcout);
    wostream::flush((wostream *)&wcerr);
    wostream::flush((wostream *)&wclog);
    return;
  }
  _S_refcount = _S_refcount + -1;
  return;
}

