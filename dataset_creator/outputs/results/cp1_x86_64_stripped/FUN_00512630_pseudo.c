
undefined8
FUN_00512630(undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_0040b080();
  puVar2 = (undefined8 *)FUN_00410840(*(undefined8 *)(lVar1 + 0x88));
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x346,"pkey_ecd_digestsign448");
      FUN_0051f8f0(0x10,100,0);
      return 0;
    }
    uVar3 = FUN_004ded90(*puVar2,param_2,param_4,param_5,(long)puVar2 + 0x11,puVar2[10],0,0,
                         puVar2[1]);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  *param_3 = 0x72;
  return 1;
}

