
undefined8 ipv6_cb(undefined1 *param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  iVar3 = *(int *)(param_3 + 0x10);
  if (iVar3 != 0x10) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x14) = iVar3;
      }
      else if (iVar3 != *(int *)(param_3 + 0x14)) {
        return 0;
      }
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
      return 1;
    }
    if ((int)param_2 < 5) {
      uVar5 = 0;
      puVar1 = param_1 + param_2;
      while( true ) {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        iVar4 = OPENSSL_hexchar2int(uVar2);
        if (iVar4 < 0) break;
        uVar5 = uVar5 << 4 | (short)(char)iVar4;
        if (param_1 == puVar1) {
          *(ushort *)(param_3 + iVar3) = uVar5 << 8 | uVar5 >> 8;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
          return 1;
        }
      }
    }
    else if (((iVar3 < 0xd) && (param_1[(int)param_2] == '\0')) &&
            (iVar3 = ipv4_from_asc(iVar3 + param_3,param_1), iVar3 != 0)) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
      return 1;
    }
  }
  return 0;
}

