
ulong ossl_param_bytes_to_blocks(long param_1)

{
  return param_1 + 7U >> 3;
}

