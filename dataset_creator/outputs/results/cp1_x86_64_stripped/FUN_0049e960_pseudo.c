
long FUN_0049e960(char *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  local_50 = param_2;
  if (param_2 == 0) goto LAB_0049ea60;
  if ((((byte)(*param_1 - 1U) < 2) || (*param_1 == '\x06')) && (*(long *)(param_1 + 0x20) != 0)) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x20) + 0x18);
    if (pcVar2 == (code *)0x0) goto LAB_0049ea82;
    iVar1 = (*pcVar2)(0xe,&local_50,param_1,0);
    if (((iVar1 != 0) && (iVar1 = (*pcVar2)(0x10,&local_50,param_1,&local_30), iVar1 != 0)) &&
       (iVar1 = (*pcVar2)(0x11,&local_50,param_1,&local_28), iVar1 != 0)) goto LAB_0049ea82;
  }
  else {
    pcVar2 = (code *)0x0;
LAB_0049ea82:
    iVar1 = FUN_004a6000(local_50,&local_48,param_1);
    if (local_48 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_dup.c",0x51,"ASN1_item_dup");
      FUN_0051f8f0(0xd,0xc0100,0);
      param_2 = 0;
      goto LAB_0049ea60;
    }
    local_40 = local_48;
    local_38 = FUN_004a54e0(0,&local_40,(long)iVar1,param_1,local_30,local_28);
    FUN_0041ad60(local_48,"../crypto/asn1/a_dup.c",0x56);
    param_2 = local_38;
    if ((pcVar2 == (code *)0x0) ||
       (iVar1 = (*pcVar2)(0xf,&local_38,param_1,local_50), param_2 = local_38, iVar1 != 0))
    goto LAB_0049ea60;
  }
  FUN_0051f420();
  param_2 = 0;
  FUN_0051f540("../crypto/asn1/a_dup.c",0x5f,"ASN1_item_dup");
  FUN_0051f8f0(0xd,100,"Type=%s",*(undefined8 *)(param_1 + 0x30));
LAB_0049ea60:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_2;
}

