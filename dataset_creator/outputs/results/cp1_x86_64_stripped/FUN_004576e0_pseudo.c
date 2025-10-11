
bool FUN_004576e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  code *in_R9;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar2 = (*in_R9)(param_2,&local_18);
  if (iVar2 < 1) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x17f,
                 "key_to_type_specific_der_bio");
    FUN_0051f8f0(0x39,0xc0100,0);
    bVar1 = false;
  }
  else {
    iVar2 = FUN_004ab7e0(param_1,local_18,iVar2);
    FUN_0041ad60(local_18,"../providers/implementations/encode_decode/encode_key2any.c",0x184);
    bVar1 = 0 < iVar2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

