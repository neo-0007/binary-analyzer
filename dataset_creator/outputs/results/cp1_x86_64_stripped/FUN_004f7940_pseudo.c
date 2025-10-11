
undefined8 FUN_004f7940(void)

{
  undefined8 uVar1;
  long *in_R9;
  
  if (*(code **)(*in_R9 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f7950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R9 + 0x68))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_vrf.c",0x2f,"ECDSA_verify");
  FUN_0051f8f0(0x10,0x98,0);
  return 0xffffffff;
}

