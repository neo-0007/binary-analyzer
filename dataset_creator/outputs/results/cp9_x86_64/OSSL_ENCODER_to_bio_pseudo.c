
bool OSSL_ENCODER_to_bio(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_68 = param_1;
  local_60 = param_2;
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders();
  local_58._0_4_ = iVar1;
  if (iVar1 == 0) {
    bVar2 = false;
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x37,"OSSL_ENCODER_to_bio");
    ERR_set_error(0x3b,0x65,
                  "No encoders were found. For standard encoders you need at least one of the default or base providers available. Did you forget to load them?"
                 );
  }
  else {
    iVar1 = encoder_process(&local_68);
    bVar2 = 0 < iVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

