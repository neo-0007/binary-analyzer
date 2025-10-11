
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CRYPTO_secure_malloc_init(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  size_t __len;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  if ((secure_mem_initialized != 0) ||
     (sec_malloc_lock = CRYPTO_THREAD_lock_new(), sec_malloc_lock == 0)) {
    return 0;
  }
  _sh = (undefined1  [16])0x0;
  _DAT_00932cd0 = (undefined1  [16])0x0;
  _DAT_00932ce0 = (undefined1  [16])0x0;
  _DAT_00932cf0 = (undefined1  [16])0x0;
  _DAT_00932d00 = (undefined1  [16])0x0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: size > 0","../crypto/mem_sec.c",0x193);
  }
  if ((param_1 - 1 & param_1) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (size & (size - 1)) == 0","../crypto/mem_sec.c",0x194);
  }
  if (param_2 < 0x11) {
    param_2 = 0x10;
  }
  else if ((param_2 - 1 & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (minsize & (minsize - 1)) == 0","../crypto/mem_sec.c",0x1a9);
  }
  DAT_00932cd0 = (void *)0x0;
  uVar2 = DAT_00932cd0;
  DAT_00932cd0 = (void *)0x0;
  DAT_00932cf8 = 0;
  lVar6 = DAT_00932cf8;
  DAT_00932cf8 = 0;
  DAT_00932d08 = (param_1 / param_2) * 2;
  DAT_00932d00 = 0;
  lVar1 = DAT_00932d00;
  DAT_00932d00 = 0;
  DAT_00932cd8 = param_1;
  DAT_00932cf0 = param_2;
  if (DAT_00932d08 >> 3 != 0) {
    uVar5 = DAT_00932d08;
    lVar6 = 0;
    do {
      DAT_00932ce8 = lVar6;
      uVar5 = uVar5 >> 1;
      lVar6 = DAT_00932ce8 + 1;
    } while (uVar5 != 0);
    DAT_00932ce0 = 0;
    DAT_00932ce0 = CRYPTO_zalloc(DAT_00932ce8 << 3,"../crypto/mem_sec.c",0x1ba);
    if (DAT_00932ce0 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist != NULL","../crypto/mem_sec.c",0x1bb);
    }
    DAT_00932cf8 = CRYPTO_zalloc(DAT_00932d08 >> 3,"../crypto/mem_sec.c",0x1bf);
    if (DAT_00932cf8 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.bittable != NULL","../crypto/mem_sec.c",0x1c0);
    }
    DAT_00932d00 = CRYPTO_zalloc(DAT_00932d08 >> 3,"../crypto/mem_sec.c",0x1c4);
    if (DAT_00932d00 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.bitmalloc != NULL","../crypto/mem_sec.c",0x1c5);
    }
    __len = sysconf(0x1e);
    if ((long)__len < 1) {
      lVar8 = 0x2000;
      __len = 0x1000;
    }
    else {
      lVar8 = __len * 2;
    }
    DAT_00932cc8 = DAT_00932cd8 + lVar8;
    sh = mmap64((void *)0x0,DAT_00932cd8 + lVar8,3,0x22,-1,0);
    lVar1 = DAT_00932d00;
    uVar2 = DAT_00932cd0;
    lVar6 = DAT_00932cf8;
    if (sh != (void *)0xffffffffffffffff) {
      DAT_00932cd0 = (void *)((long)sh + __len);
      sh_setbit(DAT_00932cd0,0,DAT_00932cf8);
      sh_add_to_list(DAT_00932ce0,DAT_00932cd0);
      iVar3 = mprotect(sh,__len,0);
      iVar4 = mprotect((void *)((lVar8 + -1 + DAT_00932cd8 & -__len) + (long)sh),__len,0);
      iVar3 = 1 - (iVar3 >> 0x1f);
      if (iVar4 < 0) {
        iVar3 = 2;
      }
      lVar6 = syscall(0x145,DAT_00932cd0,DAT_00932cd8,1);
      if ((lVar6 < 0) &&
         ((piVar7 = __errno_location(), *piVar7 != 0x26 ||
          (iVar4 = mlock(DAT_00932cd0,DAT_00932cd8), iVar4 < 0)))) {
        iVar3 = 2;
      }
      iVar4 = madvise(DAT_00932cd0,DAT_00932cd8,0x10);
      secure_mem_initialized = 1;
      if (iVar4 < 0) {
        iVar3 = 2;
      }
      return iVar3;
    }
  }
  DAT_00932cf8 = lVar6;
  DAT_00932cd0 = (void *)uVar2;
  DAT_00932d00 = lVar1;
  sh_done();
  CRYPTO_THREAD_lock_free(sec_malloc_lock);
  sec_malloc_lock = 0;
  return 0;
}

