
ushort * OPENSSL_utf82uni(char *param_1,int param_2,uchar **param_3,int *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  size_t sVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == -1) {
    sVar4 = strlen(param_1);
    param_2 = (int)sVar4;
  }
  if (param_2 < 1) {
    puVar6 = (ushort *)CRYPTO_malloc(2,"../crypto/pkcs12/p12_utl.c",0x7a);
    if (puVar6 == (ushort *)0x0) goto LAB_005fbb1a;
    local_4c = 2;
    puVar5 = puVar6;
  }
  else {
    iVar8 = 0;
    local_4c = 0;
    do {
      iVar3 = UTF8_getc((uchar *)(param_1 + iVar8),param_2 - iVar8,&local_48);
      if (iVar3 < 0) {
        puVar5 = (ushort *)OPENSSL_asc2uni(param_1,param_2,param_3,param_4);
        goto LAB_005fb9c8;
      }
      if (0x10ffff < local_48) {
        puVar5 = (ushort *)0x0;
        goto LAB_005fb9c8;
      }
      iVar7 = local_4c + 4;
      local_4c = local_4c + 2;
      if (0xffff < local_48) {
        local_4c = iVar7;
      }
      iVar8 = iVar8 + iVar3;
    } while (iVar8 < param_2);
    local_4c = local_4c + 2;
    puVar5 = (ushort *)CRYPTO_malloc(local_4c,"../crypto/pkcs12/p12_utl.c",0x7a);
    if (puVar5 == (ushort *)0x0) {
LAB_005fbb1a:
      puVar5 = (ushort *)0x0;
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_utl.c",0x7b,"OPENSSL_utf82uni");
      ERR_set_error(0x23,0xc0100,0);
      goto LAB_005fb9c8;
    }
    iVar8 = 0;
    puVar9 = puVar5;
    do {
      while( true ) {
        iVar3 = UTF8_getc((uchar *)(param_1 + iVar8),param_2 - iVar8,&local_48);
        if (0xffff < local_48) break;
        iVar8 = iVar8 + iVar3;
        puVar6 = puVar9 + 1;
        *(uchar *)puVar9 = (uchar)(local_48 >> 8);
        *(uchar *)((long)puVar9 + 1) = (uchar)local_48;
        puVar9 = puVar6;
        if (param_2 <= iVar8) goto LAB_005fbab7;
      }
      local_48 = local_48 - 0x10000;
      iVar8 = iVar8 + iVar3;
      puVar6 = puVar9 + 2;
      uVar1 = (ushort)local_48 & 0x3ff;
      sVar2 = (short)(local_48 >> 10);
      puVar9[1] = uVar1 << 8 | (ushort)(uVar1 + 0xdc00) >> 8;
      *puVar9 = sVar2 << 8 | (ushort)(sVar2 + 0xd800U) >> 8;
      puVar9 = puVar6;
    } while (iVar8 < param_2);
  }
LAB_005fbab7:
  *puVar6 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = local_4c;
  }
  if (param_3 != (uchar **)0x0) {
    *param_3 = (uchar *)puVar5;
  }
LAB_005fb9c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

