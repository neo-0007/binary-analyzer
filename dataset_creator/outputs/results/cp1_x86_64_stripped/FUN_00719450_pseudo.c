
undefined8 FUN_00719450(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  lVar3 = FUN_007a0550();
  if (lVar3 == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    FUN_007104f0(*(undefined8 *)(lVar3 + 0x980));
    uVar5 = FUN_006e1eb0(param_2);
    uVar4 = FUN_006e27f0(&DAT_0083ed80,"Unknown error ",5);
    FUN_006e1eb0(uVar5);
    iVar2 = FUN_006f4ae0(lVar3 + 0x980,&DAT_0082ac0f,uVar4,param_1);
    if (iVar2 == -1) {
      *(undefined8 *)(lVar3 + 0x980) = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x980);
    }
  }
  else {
    uVar4 = FUN_006e1eb0(param_2);
    uVar5 = FUN_006e27f0(&DAT_0083ed80,lVar3,5);
    FUN_006e1eb0(uVar4);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return uVar5;
}

