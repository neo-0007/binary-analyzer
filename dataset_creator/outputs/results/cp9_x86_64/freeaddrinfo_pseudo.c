
void freeaddrinfo(addrinfo *__ai)

{
  addrinfo *paVar1;
  
  if (__ai == (addrinfo *)0x0) {
    return;
  }
  do {
    paVar1 = __ai->ai_next;
    free(__ai->ai_canonname);
    free(__ai);
    __ai = paVar1;
  } while (paVar1 != (addrinfo *)0x0);
  return;
}

