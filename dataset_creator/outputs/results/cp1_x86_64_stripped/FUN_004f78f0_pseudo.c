
undefined8 FUN_004f78f0(void)

{
  undefined8 uVar1;
  long *in_RCX;
  
  if (*(code **)(*in_RCX + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f7900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_RCX + 0x70))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_vrf.c",0x1f,"ECDSA_do_verify");
  FUN_0051f8f0(0x10,0x98,0);
  return 0xffffffff;
}

