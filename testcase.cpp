int f(int __attribute__((vector_size(8))) v) {
  return v[~0UL];
}