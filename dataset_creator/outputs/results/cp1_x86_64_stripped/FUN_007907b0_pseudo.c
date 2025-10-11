
void FUN_007907b0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_007b8e00(param_1,"_rtld_global_ro",0x9f28436a,"GLIBC_PRIVATE",0x963cf85);
  uVar2 = DAT_0094ae78;
  uVar1 = DAT_0093eb18;
  if (lVar4 != 0) {
    if ((*(short *)(lVar4 + 6) == -0xf) || (param_1 == (long *)0x0)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_1;
    }
    lVar5 = lVar5 + *(long *)(lVar4 + 8);
    *(undefined ***)(lVar5 + 0x388) = &PTR_LAB_0093ae40;
    *(undefined8 *)(lVar5 + 0x68) = uVar2;
    uVar2 = DAT_0094aea0;
    *(undefined4 *)(lVar5 + 0x40) = DAT_0094ade0;
    uVar3 = DAT_0094ae60;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    uVar2 = DAT_00945868;
    *(undefined8 *)(lVar5 + 0x60) = uVar3;
    uVar1 = DAT_00945858;
    *(undefined8 *)(lVar5 + 800) = DAT_0094ae58;
    *(undefined8 *)(lVar5 + 0x2a8) = uVar2;
    *(undefined8 *)(lVar5 + 0x2b0) = uVar1;
    *(code **)(lVar5 + 0x378) = FUN_00784a40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("sym != NULL","rtld_static_init.c",0x35,"__rtld_static_init");
}

