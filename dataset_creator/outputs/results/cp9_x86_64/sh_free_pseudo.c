
void sh_free(undefined1 (*param_1) [16])

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  if ((param_1 < DAT_00932cd0) || ((undefined1 (*) [16])(*DAT_00932cd0 + DAT_00932cd8) <= param_1))
  {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","../crypto/mem_sec.c",0x297);
  }
  uVar3 = sh_getlist();
  iVar2 = sh_testbit(param_1,uVar3 & 0xffffffff,DAT_00932cf8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","../crypto/mem_sec.c",0x29c);
  }
  sh_clearbit(param_1,uVar3 & 0xffffffff,DAT_00932d00);
  sh_add_to_list(DAT_00932ce0 + uVar3 * 8,param_1);
  while( true ) {
    uVar6 = uVar3 & 0xffffffff;
    pauVar5 = (undefined1 (*) [16])sh_find_my_buddy(param_1,uVar3 & 0xffffffff);
    if (pauVar5 == (undefined1 (*) [16])0x0) {
      return;
    }
    pauVar4 = (undefined1 (*) [16])sh_find_my_buddy(pauVar5,uVar6);
    if (param_1 != pauVar4) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ptr == sh_find_my_buddy(buddy, list)","../crypto/mem_sec.c",
                  0x2a2);
    }
    iVar2 = sh_testbit(param_1,uVar6,DAT_00932d00);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",
                  0x2a4);
    }
    sh_clearbit(param_1,uVar6,DAT_00932cf8);
    sh_remove_from_list(param_1);
    iVar2 = sh_testbit(param_1,uVar6,DAT_00932d00);
    if (iVar2 != 0) break;
    uVar3 = uVar3 - 1;
    sh_clearbit(pauVar5,uVar6,DAT_00932cf8);
    sh_remove_from_list(pauVar5);
    pauVar4 = pauVar5;
    if (pauVar5 <= param_1) {
      pauVar4 = param_1;
    }
    if (pauVar5 < param_1) {
      param_1 = pauVar5;
    }
    *pauVar4 = (undefined1  [16])0x0;
    iVar2 = sh_testbit(param_1,uVar3 & 0xffffffff,DAT_00932d00);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",
                  0x2b2);
    }
    sh_setbit(param_1,uVar3 & 0xffffffff,DAT_00932cf8);
    puVar1 = (undefined8 *)(DAT_00932ce0 + uVar3 * 8);
    sh_add_to_list(puVar1,param_1);
    if ((undefined1 (*) [16])*puVar1 != param_1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist[list] == ptr","../crypto/mem_sec.c",0x2b5);
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",0x2a7);
}

