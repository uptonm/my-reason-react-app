open Jest;

describe("some test", () =>
  test("passes!", () =>
    Expect.(expect(false) |> toBe(false))
  )
);