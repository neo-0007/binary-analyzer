
undefined1 (*) [16] CRYPTO_secure_malloc(ulong param_1,char *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  if (secure_mem_initialized == 0) {
    pauVar5 = (undefined1 (*) [16])CRYPTO_malloc((int)param_1,param_2,param_3);
    return pauVar5;
  }
  iVar2 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
  if (iVar2 == 0) {
    return (undefined1 (*) [16])0x0;
  }
  uVar7 = DAT_00932cf0;
  uVar1 = DAT_00932ce8;
  if (param_1 <= DAT_00932cd8) {
    for (; uVar1 = uVar1 - 1, uVar7 < param_1; uVar7 = uVar7 * 2) {
    }
    uVar7 = uVar1;
    if (-1 < (long)uVar1) {
      do {
        lVar4 = DAT_00932ce0;
        if (*(long *)(DAT_00932ce0 + uVar7 * 8) != 0) goto LAB_0041a837;
        bVar9 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar9);
      lVar4 = 0;
      pauVar5 = (undefined1 (*) [16])0x0;
      goto LAB_0041a8a9;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
  lVar4 = 0;
  goto LAB_0041a8a9;
LAB_0041a837:
  while (uVar7 != uVar1) {
    lVar3 = *(long *)(lVar4 + uVar7 * 8);
    lVar8 = uVar7 * 8;
    iVar2 = sh_testbit(lVar3,uVar7 & 0xffffffff,DAT_00932d00);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                  0x26a);
    }
    sh_clearbit(lVar3,uVar7 & 0xffffffff,DAT_00932cf8);
    sh_remove_from_list(lVar3);
    if (lVar3 == *(long *)(DAT_00932ce0 + uVar7 * 8)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: temp != sh.freelist[slist]","../crypto/mem_sec.c",0x26d);
    }
    uVar7 = uVar7 + 1;
    iVar2 = sh_testbit(lVar3,uVar7 & 0xffffffff,DAT_00932d00);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                  0x273);
    }
    lVar8 = lVar8 + 8;
    sh_setbit(lVar3,uVar7 & 0xffffffff,DAT_00932cf8);
    plVar6 = (long *)(DAT_00932ce0 + lVar8);
    sh_add_to_list(plVar6,lVar3);
    if (lVar3 != *plVar6) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist[slist] == temp","../crypto/mem_sec.c",0x276);
    }
    lVar3 = lVar3 + (DAT_00932cd8 >> ((byte)uVar7 & 0x3f));
    iVar2 = sh_testbit(lVar3,uVar7 & 0xffffffff,DAT_00932d00);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                  0x27a);
    }
    sh_setbit(lVar3,uVar7 & 0xffffffff,DAT_00932cf8);
    lVar4 = DAT_00932ce0;
    plVar6 = (long *)(lVar8 + DAT_00932ce0);
    sh_add_to_list(plVar6,lVar3);
    if (lVar3 != *plVar6) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist[slist] == temp","../crypto/mem_sec.c",0x27d);
    }
    lVar8 = lVar3 - (DAT_00932cd8 >> ((byte)uVar7 & 0x3f));
    lVar3 = sh_find_my_buddy(lVar3,uVar7 & 0xffffffff);
    if (lVar8 != lVar3) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)"
                  ,"../crypto/mem_sec.c",0x27f);
    }
  }
  pauVar5 = *(undefined1 (**) [16])(lVar4 + uVar7 * 8);
  iVar2 = sh_testbit(pauVar5,uVar7 & 0xffffffff,DAT_00932cf8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(chunk, list, sh.bittable)","../crypto/mem_sec.c",0x284
               );
  }
  sh_setbit(pauVar5,uVar7 & 0xffffffff,DAT_00932d00);
  sh_remove_from_list(pauVar5);
  if ((pauVar5 < DAT_00932cd0) || ((undefined1 (*) [16])(*DAT_00932cd0 + DAT_00932cd8) <= pauVar5))
  {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(chunk)","../crypto/mem_sec.c",0x288);
  }
  *pauVar5 = (undefined1  [16])0x0;
  lVar4 = sh_actual_size(pauVar5);
LAB_0041a8a9:
  secure_mem_used = secure_mem_used + lVar4;
  CRYPTO_THREAD_unlock(sec_malloc_lock);
  return pauVar5;
}

