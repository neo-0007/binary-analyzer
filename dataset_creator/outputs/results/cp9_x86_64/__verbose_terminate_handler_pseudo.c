
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  long lVar1;
  char *__s;
  char *__s_00;
  long in_FS_OFFSET;
  int local_24;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (__verbose_terminate_handler()::terminating != '\0') {
    fwrite("terminate called recursively\n",1,0x1d,(FILE *)stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __verbose_terminate_handler()::terminating = 1;
  lVar1 = __cxa_current_exception_type();
  if (lVar1 != 0) {
    local_24 = -1;
    __s_00 = *(char **)(lVar1 + 8) + (**(char **)(lVar1 + 8) == '*');
    __s = (char *)__cxa_demangle(__s_00,0,0,&local_24);
    fwrite("terminate called after throwing an instance of \'",1,0x30,(FILE *)stderr);
    if (local_24 == 0) {
      fputs(__s,(FILE *)stderr);
    }
    else {
      fputs(__s_00,(FILE *)stderr);
    }
    fwrite(&DAT_00816844,1,2,(FILE *)stderr);
    if (local_24 == 0) {
      FUN_004039eb();
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  fwrite("terminate called without an active exception\n",1,0x2d,(FILE *)stderr);
                    /* WARNING: Subroutine does not return */
  abort();
}

