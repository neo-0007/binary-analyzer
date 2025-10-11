
undefined8 FUN_004e7f40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_54;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  iVar2 = FUN_004e7ab0(&local_54,&local_50,uVar5);
  if (iVar2 == 0) {
    uVar5 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_ameth.c",0x4e,"eckey_pub_encode");
    FUN_0051f8f0(0x10,0x80010,0);
    goto LAB_004e8049;
  }
  iVar2 = FUN_004eaa90(uVar5,0);
  uVar1 = local_50;
  if ((iVar2 < 1) || (lVar3 = FUN_0041ad90((long)iVar2,"../crypto/ec/ec_ameth.c",0x54), lVar3 == 0))
  {
    lVar3 = 0;
LAB_004e8029:
    if (local_54 == 6) goto LAB_004e8018;
LAB_004e8031:
    FUN_004a2270(uVar1);
  }
  else {
    local_48 = lVar3;
    iVar2 = FUN_004eaa90(uVar5,&local_48);
    if (iVar2 < 1) goto LAB_004e8029;
    uVar4 = FUN_004239c0(0x198);
    uVar5 = 1;
    iVar2 = FUN_005af9b0(param_1,uVar4,local_54,uVar1,lVar3,iVar2);
    if (iVar2 != 0) goto LAB_004e8049;
    if (local_54 != 6) goto LAB_004e8031;
LAB_004e8018:
    FUN_004a06b0();
  }
  uVar5 = 0;
  FUN_0041ad60(lVar3,"../crypto/ec/ec_ameth.c",99);
LAB_004e8049:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

