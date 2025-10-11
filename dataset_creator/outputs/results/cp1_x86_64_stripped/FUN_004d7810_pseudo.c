
undefined8 FUN_004d7810(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_005afa30(0,local_40,&local_48,&local_28,param_2);
  if ((int)uVar1 == 0) goto LAB_004d784e;
  FUN_004a8930(0,&local_44,&local_30,local_28);
  if (local_44 == 0x10) {
    local_38 = *(undefined8 *)(local_30 + 2);
    lVar2 = FUN_004d7be0(0,&local_38,(long)*local_30);
    if (lVar2 == 0) {
      FUN_0051f420();
      lVar3 = 0;
      FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x33,"dsa_pub_decode");
      FUN_0051f8f0(10,0x68,0);
    }
    else {
LAB_004d7901:
      lVar3 = FUN_004a76a0(0,local_40,(long)local_48);
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x42,"dsa_pub_decode");
        FUN_0051f8f0(10,0x68,0);
      }
      else {
        lVar4 = FUN_0049fa70(lVar3,0);
        *(long *)(lVar2 + 0x68) = lVar4;
        if (lVar4 != 0) {
          *(long *)(lVar2 + 0xc0) = *(long *)(lVar2 + 0xc0) + 1;
          thunk_FUN_004a2270(lVar3);
          FUN_0040f1c0(param_1,0x74,lVar2);
          uVar1 = 1;
          goto LAB_004d784e;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x47,"dsa_pub_decode");
        FUN_0051f8f0(10,0x6c,0);
      }
    }
  }
  else if ((local_44 == 5) || (local_44 == -1)) {
    lVar2 = FUN_004d8c90();
    if (lVar2 != 0) goto LAB_004d7901;
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x39,"dsa_pub_decode");
    FUN_0051f8f0(10,0xc0100,0);
  }
  else {
    FUN_0051f420();
    lVar2 = 0;
    lVar3 = 0;
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x3d,"dsa_pub_decode");
    FUN_0051f8f0(10,0x69,0);
  }
  thunk_FUN_004a2270(lVar3);
  FUN_004d8960(lVar2);
  uVar1 = 0;
LAB_004d784e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

