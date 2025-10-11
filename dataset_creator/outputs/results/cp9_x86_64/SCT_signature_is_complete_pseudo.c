
ulong SCT_signature_is_complete(long param_1)

{
  ulong uVar1;
  
  uVar1 = SCT_get_signature_nid();
  if (((int)uVar1 != 0) && (uVar1 = 0, *(long *)(param_1 + 0x48) != 0)) {
    uVar1 = (ulong)(*(long *)(param_1 + 0x50) != 0);
  }
  return uVar1;
}

