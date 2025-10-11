
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  if (_dl_pagesize != 0) {
    return (int)_dl_pagesize;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("GLRO(dl_pagesize) != 0","../sysdeps/unix/sysv/linux/getpagesize.c",0x1c,
                "__getpagesize");
}

