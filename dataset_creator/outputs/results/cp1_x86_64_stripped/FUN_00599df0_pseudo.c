
uint FUN_00599df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_005a2b20(param_2);
  local_48 = FUN_004a23e0(uVar3);
  iVar1 = FUN_004a23b0(uVar3);
  lVar4 = FUN_0060f270(param_2);
  uVar3 = 0;
  if (lVar4 != 0) {
    if (*(code **)(lVar4 + 8) == (code *)0x0) {
      lVar5 = (**(code **)(lVar4 + 0x20))(0,&local_48,(long)iVar1);
    }
    else {
      uVar3 = (**(code **)(lVar4 + 8))();
      lVar5 = FUN_004a55c0(0,&local_48,(long)iVar1,uVar3);
    }
    if (lVar5 != 0) {
      if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
        if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
          if (*(code **)(lVar4 + 0x50) == (code *)0x0) {
            uVar2 = 0;
            lVar7 = 0;
            lVar6 = 0;
          }
          else {
            iVar1 = (**(code **)(lVar4 + 0x50))(lVar4,lVar5,param_1,param_4);
            uVar2 = (uint)(iVar1 != 0);
            lVar7 = 0;
            lVar6 = 0;
          }
        }
        else {
          lVar7 = (**(code **)(lVar4 + 0x40))(lVar4,lVar5,0);
          if (lVar7 == 0) {
            lVar6 = 0;
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
            lVar6 = 0;
            FUN_00599c80(param_1,lVar7,param_4,*(uint *)(lVar4 + 4) & 4);
          }
        }
      }
      else {
        lVar6 = (**(code **)(lVar4 + 0x30))(lVar4,lVar5);
        if (lVar6 == 0) {
          lVar7 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
          lVar7 = 0;
          FUN_004ae9e0(param_1,"%*s%s",param_4,&DAT_0083e5c2,lVar6);
        }
      }
      FUN_00436430(lVar7,FUN_0059cb40);
      FUN_0041ad60(lVar6,"../crypto/x509/v3_prn.c",0x83);
      if (*(code **)(lVar4 + 8) == (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar5);
      }
      else {
        uVar3 = (**(code **)(lVar4 + 8))();
        FUN_004a6ba0(lVar5,uVar3);
      }
      goto LAB_00599f06;
    }
    uVar3 = 1;
  }
  uVar2 = FUN_00599bd0(param_1,local_48,iVar1,param_3,param_4,uVar3);
LAB_00599f06:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

