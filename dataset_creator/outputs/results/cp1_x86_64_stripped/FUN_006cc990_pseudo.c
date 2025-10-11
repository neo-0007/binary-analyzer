
void FUN_006cc990(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_retaddr;
  undefined8 local_1b0;
  undefined1 local_1a8 [296];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  
  puVar3 = param_1;
  for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x13] = unaff_retaddr;
  param_1[0x18] = 0x4000000000000000;
  iVar1 = FUN_006cc320(param_1,local_1a8);
  if (iVar1 != 0) goto FUN_00404697;
  if (PTR_FUN_0093af78 == (undefined *)0x0) {
LAB_006cca80:
    if (DAT_00945610 == '\0') {
      DAT_00945610 = '\b';
      DAT_00945611 = 8;
      DAT_00945612 = 8;
      DAT_00945613 = 8;
      DAT_00945614 = 8;
      DAT_00945615 = 8;
      DAT_00945616 = 8;
      DAT_00945617 = '\b';
      DAT_00945618 = 8;
      DAT_00945619 = 8;
      DAT_0094561a = 8;
      DAT_0094561b = 8;
      DAT_0094561c = 8;
      DAT_0094561d = 8;
      DAT_0094561e = 8;
      DAT_0094561f = 8;
      DAT_00945620 = 8;
    }
  }
  else {
    iVar1 = FUN_0070aea0(&DAT_00945600,FUN_006caa80);
    if (iVar1 != 0) goto LAB_006cca80;
  }
  if (DAT_00945617 == '\b') {
    if ((*(byte *)((long)param_1 + 199) & 0x40) != 0) {
      *(undefined1 *)((long)param_1 + 0xdf) = 0;
    }
    local_68 = 1;
    param_1[7] = &local_1b0;
    local_78 = 7;
    local_80 = 0;
    local_1b0 = param_2;
    FUN_006cb630(param_1,local_1a8);
    param_1[0x13] = param_3;
    return;
  }
FUN_00404697:
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

