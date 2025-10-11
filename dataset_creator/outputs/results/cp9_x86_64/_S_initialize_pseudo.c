
/* std::locale::_S_initialize() */

void std::locale::_S_initialize(void)

{
  pthread_once(&_S_once,_S_initialize_once);
  if (_S_classic != 0) {
    return;
  }
  _S_initialize_once();
  return;
}

