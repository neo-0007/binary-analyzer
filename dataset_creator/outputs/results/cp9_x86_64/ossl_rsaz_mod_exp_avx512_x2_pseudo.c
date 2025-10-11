
undefined8
ossl_rsaz_mod_exp_avx512_x2
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          int param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *ptr;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_13 == 0x400) {
    ptr = CRYPTO_malloc(0x4a0,"../crypto/bn/rsaz_exp_x2.c",0xa3);
    if (ptr != (void *)0x0) {
      uVar5 = (ulong)ptr & 0xffffffffffffffc0;
      lVar1 = uVar5 + 0x220;
      lVar2 = uVar5 + 0x2c0;
      lVar3 = uVar5 + 0x360;
      lVar4 = uVar5 + 0x180;
      lVar6 = uVar5 + 0x400;
      to_words52_constprop_0(uVar5 + 0x40,0x14,param_2);
      to_words52_constprop_0(uVar5 + 0xe0,0x14,param_8);
      to_words52_constprop_0(lVar4,0x14,param_4);
      to_words52_constprop_0(lVar1,0x14,param_10);
      to_words52_constprop_0(lVar2,0x14,param_5);
      to_words52_constprop_0(lVar3,0x14,param_11);
      *(undefined8 *)(uVar5 + 0x400) = 0;
      *(undefined8 *)(uVar5 + 0x498) = 0;
      puVar9 = (undefined8 *)(uVar5 + 0x408);
      for (uVar8 = (ulong)(((int)lVar6 - (int)(undefined8 *)(uVar5 + 0x408)) + 0xa0U >> 3);
          uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      *(ulong *)(uVar5 + 0x408) = *(ulong *)(uVar5 + 0x408) | 0x1000;
      ossl_rsaz_amm52x20_x1_256(lVar2,lVar2,lVar2,lVar4,param_6);
      ossl_rsaz_amm52x20_x1_256(lVar2,lVar2,lVar6,lVar4,param_6);
      ossl_rsaz_amm52x20_x1_256(lVar3,lVar3,lVar3,lVar1,param_12);
      ossl_rsaz_amm52x20_x1_256(lVar3,lVar3,lVar6,lVar1,param_12);
      local_68._8_8_ = param_9;
      local_68._0_8_ = param_3;
      local_58._8_8_ = param_12;
      local_58._0_8_ = param_6;
      RSAZ_exp52x20_x2_256(lVar2,uVar5 + 0x40,local_68,lVar4,lVar2,local_58);
      from_words52_constprop_0(param_1,lVar2);
      from_words52_constprop_0(param_7,lVar3);
      OPENSSL_cleanse(ptr,0x460);
      CRYPTO_free(ptr);
      uVar7 = 1;
      goto LAB_005bc108;
    }
  }
  uVar7 = 0;
LAB_005bc108:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

