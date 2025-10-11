
bool FUN_005b7d00(long param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_88;
  int local_84;
  long local_80;
  undefined8 local_78;
  undefined1 local_68 [20];
  int local_54;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = thunk_FUN_007129d0(param_2);
  local_78 = 0x100;
  local_84 = 0x17;
  local_80 = param_2;
  iVar1 = FUN_005b7c80(&local_88);
  if (iVar1 == 0) {
    local_84 = 0x18;
    iVar1 = FUN_005b7c80(&local_88);
    if (iVar1 != 0) goto LAB_005b7d54;
    goto LAB_005b7dcc;
  }
LAB_005b7d54:
  if (param_1 == 0) {
    bVar2 = true;
  }
  else {
    if (local_84 == 0x18) {
      iVar1 = FUN_005b73c0(local_68,&local_88);
      if (iVar1 == 0) {
LAB_005b7dcc:
        bVar2 = false;
        goto LAB_005b7d93;
      }
      if (local_54 - 0x32U < 100) {
        iVar1 = local_88 + -1;
        local_88 = local_88 + -2;
        local_80 = FUN_0041aec0((long)iVar1,"../crypto/asn1/a_time.c",0x1a6);
        if (local_80 == 0) {
          FUN_0051f420(0);
          FUN_0051f540("../crypto/asn1/a_time.c",0x1a8,"ASN1_TIME_set_string_X509");
          FUN_0051f8f0(0xd,0xc0100,0);
          goto LAB_005b7dcc;
        }
        thunk_FUN_00713a50(local_80,param_2 + 2,(long)local_88);
        local_84 = 0x17;
      }
    }
    iVar1 = FUN_004a20e0(param_1,&local_88);
    bVar2 = iVar1 != 0;
  }
  if (local_80 != param_2) {
    FUN_0041ad60(local_80,"../crypto/asn1/a_time.c",0x1b4);
  }
LAB_005b7d93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

