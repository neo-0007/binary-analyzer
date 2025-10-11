
void SCT_CTX_set1_issuer_pubkey(long param_1,undefined8 param_2)

{
  ct_public_key_hash_isra_0
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),param_2,param_1 + 0x18,
             param_1 + 0x20);
  return;
}

