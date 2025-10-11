
ushort * FUN_0055cf30(long param_1,int param_2,undefined8 *param_3,int *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == -1) {
    param_2 = thunk_FUN_007129d0();
  }
  if (param_2 < 1) {
    puVar5 = (ushort *)FUN_0041ad90(2,"../crypto/pkcs12/p12_utl.c",0x7a);
    if (puVar5 == (ushort *)0x0) goto LAB_0055d13a;
    local_4c = 2;
    puVar4 = puVar5;
  }
  else {
    iVar7 = 0;
    local_4c = 0;
    do {
      iVar3 = FUN_005b8770(iVar7 + param_1,param_2 - iVar7,&local_48);
      if (iVar3 < 0) {
        puVar4 = (ushort *)FUN_0055cd30(param_1,param_2,param_3,param_4);
        goto LAB_0055cfe8;
      }
      if (0x10ffff < local_48) {
        puVar4 = (ushort *)0x0;
        goto LAB_0055cfe8;
      }
      iVar6 = local_4c + 4;
      local_4c = local_4c + 2;
      if (0xffff < local_48) {
        local_4c = iVar6;
      }
      iVar7 = iVar7 + iVar3;
    } while (iVar7 < param_2);
    local_4c = local_4c + 2;
    puVar4 = (ushort *)FUN_0041ad90((long)local_4c,"../crypto/pkcs12/p12_utl.c",0x7a);
    if (puVar4 == (ushort *)0x0) {
LAB_0055d13a:
      puVar4 = (ushort *)0x0;
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_utl.c",0x7b,"OPENSSL_utf82uni");
      FUN_0051f8f0(0x23,0xc0100,0);
      goto LAB_0055cfe8;
    }
    iVar7 = 0;
    puVar8 = puVar4;
    do {
      while( true ) {
        iVar3 = FUN_005b8770(iVar7 + param_1,param_2 - iVar7,&local_48);
        if (0xffff < local_48) break;
        iVar7 = iVar7 + iVar3;
        puVar5 = puVar8 + 1;
        *(char *)puVar8 = (char)(local_48 >> 8);
        *(char *)((long)puVar8 + 1) = (char)local_48;
        puVar8 = puVar5;
        if (param_2 <= iVar7) goto LAB_0055d0d7;
      }
      local_48 = local_48 - 0x10000;
      iVar7 = iVar7 + iVar3;
      puVar5 = puVar8 + 2;
      uVar1 = (ushort)local_48 & 0x3ff;
      sVar2 = (short)(local_48 >> 10);
      puVar8[1] = uVar1 << 8 | (ushort)(uVar1 + 0xdc00) >> 8;
      *puVar8 = sVar2 << 8 | (ushort)(sVar2 + 0xd800U) >> 8;
      puVar8 = puVar5;
    } while (iVar7 < param_2);
  }
LAB_0055d0d7:
  *puVar5 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = local_4c;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = puVar4;
  }
LAB_0055cfe8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

