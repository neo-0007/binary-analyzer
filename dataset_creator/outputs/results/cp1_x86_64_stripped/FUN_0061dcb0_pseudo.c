
undefined8 FUN_0061dcb0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0061dcd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(long *)(param_1 + 0x30));
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_conf.c",0x18b,"X509V3_get_section");
  FUN_0051f8f0(0x22,0x94,0);
  return 0;
}

